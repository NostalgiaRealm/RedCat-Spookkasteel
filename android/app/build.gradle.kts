plugins {
    id("com.android.application")
    id("org.jetbrains.kotlin.android")
}

val gameRoot = rootProject.projectDir.parentFile
val gameAssets = layout.buildDirectory.dir("generated/gameAssets")
val prepareGameAssets by tasks.registering(Exec::class) {
    description = "Stage and verify the shared offline game assets."
    group = "build setup"
    workingDir(gameRoot)
    commandLine("node", "tools/prepare-android.mjs", "--output", "android/app/build/generated/gameAssets")
    inputs.files(fileTree(gameRoot) {
        include("index.html", "src/**", "assets/**", "data/**", "node_modules/three/**")
        include("package-lock.json", "tools/prepare-android.mjs", "tools/refresh-web-cache.mjs")
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
        versionCode = 4
        versionName = "1.0.2"
    }

    sourceSets["main"].assets.setSrcDirs(listOf(gameAssets))
    androidResources {
        // The staging ownership marker contains workstation paths and must never ship.
        ignoreAssetsPatterns += ".*"
        // AssetFileDescriptor supplies bounded, seekable media streams.
        noCompress += listOf("mp4", "webm", "wav", "ogg", "bin")
    }
    buildFeatures { buildConfig = true }
    buildTypes {
        debug {
            applicationIdSuffix = ".debug"
            versionNameSuffix = "-debug"
        }
        release {
            isMinifyEnabled = false
            // Release signing is intentionally not configured in source control.
        }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    kotlinOptions { jvmTarget = "17" }
}

tasks.named("preBuild") { dependsOn(prepareGameAssets) }

dependencies {
    implementation("androidx.activity:activity:1.10.1")
    implementation("androidx.core:core:1.16.0")
    implementation("androidx.webkit:webkit:1.14.0")
    testImplementation("junit:junit:4.13.2")
}
