/*
 * FUN_005913a0 at 005913a0
 * undefined FUN_005913a0(void)
 * Address ranges: 005913a0-00591472
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fe9c slot 19 for .?AVCAdamSparkGenerator@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fe9c slot 19 for
   .?AVCAdamSparkGenerator@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_005913a0(int param_1,float *param_2)

{
  int iVar1;
  
  *(float *)(param_1 + 0xf8) = *param_2;
  *(float *)(param_1 + 0xfc) = param_2[1];
  *(float *)(param_1 + 0x100) = param_2[2];
  iVar1 = FUN_0060a4a0();
  *(float *)(param_1 + 0x110) = ((float)(iVar1 % 10000) * 0.0002 + *(float *)(param_1 + 0xf8)) - 1.0
  ;
  iVar1 = FUN_0060a4a0();
  *(float *)(param_1 + 0x114) = ((float)(iVar1 % 10000) * 0.0002 + *(float *)(param_1 + 0xfc)) - 1.0
  ;
  iVar1 = FUN_0060a4a0();
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x437f0000;
  *(undefined4 *)(param_1 + 0x128) = 0x437f0000;
  *(undefined4 *)(param_1 + 300) = 0x437f0000;
  *(undefined4 *)(param_1 + 0x130) = 0x437f0000;
  *(float *)(param_1 + 0x118) =
       ((float)(iVar1 % 10000) * 0.0002 + *(float *)(param_1 + 0x100)) - 1.0;
  return;
}

