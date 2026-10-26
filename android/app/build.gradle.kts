import java.util.Properties

plugins {
    id("com.android.application")
    id("org.jetbrains.kotlin.android")
}

val gameRoot = rootProject.projectDir.parentFile
// Keep the upload key and both passwords outside the checkout. This file is
// deliberately optional for debug builds; release tasks fail without it.
val signingPropertiesPath = providers.environmentVariable("REDCAT_ANDROID_SIGNING_PROPERTIES").orNull
val signingProperties = Properties().apply {
    signingPropertiesPath?.let { path -> file(path).inputStream().use { load(it) } }
}
val signingFields = listOf("storeFile", "storePassword", "keyAlias", "keyPassword")
val hasReleaseSigning = signingFields.all { !signingProperties.getProperty(it).isNullOrBlank() }
val gameAssets = layout.buildDirectory.dir("generated/gameAssets")
val prepareGameAssets by tasks.registering(Exec::class) {
    description = "Stage and verify the shared offline game assets."
    group = "build setup"
    workingDir(gameRoot)
    commandLine("node", "tools/prepare-android.mjs", "--output", "android/app/build/generated/gameAssets")
    inputs.files(fileTree(gameRoot) {
        // Editable modules are build inputs only. prepare-android regenerates
        // src/game.bundle.js and stages the runtime without source/.
        include("index.html", "source/**", "src/**", "assets/**", "data/**", "node_modules/three/**")
        include("package.json", "package-lock.json", "tools/prepare-android.mjs", "tools/refresh-web-cache.mjs")
        include("tools/runtime-bundle.mjs")
    })
    outputs.dir(gameAssets)
}

android {
    namespace = "com.nostalgiarealm.redcatspookkasteel"
    compileSdk = 36
    buildToolsVersion = "36.0.0"

    defaultConfig {
        applicationId = "com.nostalgiarealm.redcatspookkasteel"
        minSdk = 29
        targetSdk = 36
        versionCode = 6
        versionName = "1.0.4"
    }

    sourceSets["main"].assets.setSrcDirs(listOf(gameAssets))
    androidResources {
        // The staging ownership marker contains workstation paths and must never ship.
        ignoreAssetsPatterns += ".*"
        // AssetFileDescriptor supplies bounded, seekable media streams.
        noCompress += listOf("mp4", "webm", "wav", "ogg", "bin")
    }
    buildFeatures { buildConfig = true }
    signingConfigs {
        if (hasReleaseSigning) {
            create("upload") {
                storeFile = file(signingProperties.getProperty("storeFile"))
                storePassword = signingProperties.getProperty("storePassword")
                keyAlias = signingProperties.getProperty("keyAlias")
                keyPassword = signingProperties.getProperty("keyPassword")
            }
        }
    }
    buildTypes {
        debug {
            applicationIdSuffix = ".debug"
            versionNameSuffix = "-debug"
        }
        release {
            isMinifyEnabled = false
            if (hasReleaseSigning) signingConfig = signingConfigs.getByName("upload")
        }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    kotlinOptions { jvmTarget = "17" }
}

tasks.named("preBuild") { dependsOn(prepareGameAssets) }
val requireReleaseSigning by tasks.registering {
    doLast {
        check(hasReleaseSigning) {
            "Set REDCAT_ANDROID_SIGNING_PROPERTIES to a private properties file containing " +
                signingFields.joinToString() + ". See ANDROID.md."
        }
    }
}
tasks.matching { it.name == "preReleaseBuild" }.configureEach { dependsOn(requireReleaseSigning) }

dependencies {
    implementation("androidx.activity:activity:1.10.1")
    implementation("androidx.core:core:1.16.0")
    implementation("androidx.webkit:webkit:1.14.0")
    testImplementation("junit:junit:4.13.2")
}
