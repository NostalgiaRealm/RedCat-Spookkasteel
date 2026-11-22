import java.util.Properties

plugins {
    id("com.android.application")
}

// The Android app of the recompiled port: GeckoView (Firefox's engine) shows the packaged site
// (dist/site, made by `npm run package`), served from the app's own files by a server on the loopback
// address. Android's own WebView cannot run the port: it never makes a page cross-origin isolated
// (tools/android-check.mjs shows it). Same application id and signing key as the app of the JavaScript port
// (../RCSPOOK_NEW/android, versions up to 1.0.8 / versionCode 10), so it installs over it.
//
// GeckoView is native code: one ABI per build. -PgeckoAbi=arm64-v8a (phones; the default),
// x86_64 (the emulator), armeabi-v7a or x86.
val geckoVersion = "160.0.20261104181552"
val geckoAbi = (findProperty("geckoAbi") as String?) ?: "arm64-v8a"
val gameRoot = rootProject.projectDir.parentFile
val site = gameRoot.resolve("dist/site")
// Keep the upload key and both passwords outside the checkout. This file is
// deliberately optional for debug builds; release tasks fail without it.
val signingPropertiesPath = providers.environmentVariable("REDCAT_ANDROID_SIGNING_PROPERTIES").orNull
val signingProperties = Properties().apply {
    signingPropertiesPath?.let { path -> file(path).inputStream().use { load(it) } }
}
val signingFields = listOf("storeFile", "storePassword", "keyAlias", "keyPassword")
val hasReleaseSigning = signingFields.all { !signingProperties.getProperty(it).isNullOrBlank() }
val gameAssets = layout.buildDirectory.dir("generated/gameAssets")
// dist/site without the .gz copies (a web server's business; inside an APK they would be 44 MB of duplicates).
val prepareGameAssets by tasks.registering(Sync::class) {
    description = "Copies the packaged site (dist/site) into the app's assets."
    group = "build setup"
    doFirst { check(site.resolve("build.json").isFile) { "dist/site is missing: run `npm run package` in ${gameRoot} first." } }
    from(site) { exclude("**/*.gz") }
    into(gameAssets.map { it.dir("www") })
}

android {
    namespace = "com.nostalgiarealm.redcatspookkasteel"
    // GeckoView 160 is built against API 37 and asks the same of the app; the target stays 36 as in
    // the JavaScript port's app. (It names 37.2; this machine's SDK has 37.0, see geckoCompileSdkCheck below.)
    compileSdk = 37
    buildToolsVersion = "36.1.0"

    defaultConfig {
        applicationId = "com.nostalgiarealm.redcatspookkasteel"
        minSdk = 29
        targetSdk = 36
        versionCode = 22
        versionName = "2.0.2"
        ndk { abiFilters += geckoAbi }
    }

    sourceSets["main"].assets.setSrcDirs(listOf(gameAssets))
    androidResources {
        ignoreAssetsPatterns += ".*"
        // The movies are compressed already and are asked for in byte ranges. Everything else is
        // read whole and is stored compressed (the game's .bmp and .wav files shrink to a third).
        noCompress += listOf("mp4", "webm")
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
    packaging {
        // GeckoView loads its libraries from the APK itself; they are stored uncompressed and page-aligned
        jniLibs { useLegacyPackaging = false }
    }
}
kotlin { compilerOptions { jvmTarget.set(org.jetbrains.kotlin.gradle.dsl.JvmTarget.JVM_17) } }

tasks.named("preBuild") { dependsOn(prepareGameAssets) }
// GeckoView 160's metadata says "compile against API 37.2 or later". The SDK on the build machine has
// platform 37.0 (no sdkmanager is installed to add 37.2), and the app uses nothing of 37 itself, so
// that one check is switched off; everything else (compiling, linking resources, lint) still runs.
// With platform 37.2 installed: set compileSdk to it and remove these two lines.
val geckoCompileSdkCheck = false
tasks.matching { it.name.startsWith("check") && it.name.endsWith("AarMetadata") }.configureEach { enabled = geckoCompileSdkCheck }
val requireReleaseSigning by tasks.registering {
    doLast {
        check(hasReleaseSigning) {
            "Set REDCAT_ANDROID_SIGNING_PROPERTIES to a private properties file containing " +
                signingFields.joinToString() + ". See tools/build-android.mjs."
        }
    }
}
tasks.matching { it.name == "preReleaseBuild" }.configureEach { dependsOn(requireReleaseSigning) }

dependencies {
    implementation("androidx.activity:activity:1.10.1")
    implementation("androidx.core:core:1.16.0")
    implementation("org.mozilla.geckoview:geckoview-$geckoAbi:$geckoVersion")
    testImplementation("junit:junit:4.13.2")
}
