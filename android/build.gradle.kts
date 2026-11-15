// Kotlin is compiled by the Android plugin itself (built in since 9.0). GeckoView 160 brings the Kotlin
// 2.4 library, which the compiler that plugin would choose by itself (2.2) cannot read: hence the line below.
buildscript {
    dependencies { classpath("org.jetbrains.kotlin:kotlin-gradle-plugin:2.4.21") }
}
plugins {
    id("com.android.application") version "9.5.0" apply false
}
