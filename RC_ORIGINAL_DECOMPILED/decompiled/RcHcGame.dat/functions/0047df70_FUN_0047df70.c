/*
 * FUN_0047df70 at 0047df70
 * undefined FUN_0047df70(void)
 * Address ranges: 0047df70-0047e08c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e314 slot 2 for .?AVCRcParticle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e314 slot 2 for
   .?AVCRcParticle@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0047df70(float *param_1)

{
  float *pfStack_64;
  float local_54 [5];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628ed8;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x1b) != '\0') {
    local_38 = param_1[0x28] * 0.32 * 0.5;
    local_34 = param_1[0x29] * 0.32 * 0.5;
    local_30 = param_1[0x2a] * 0.32 * 0.5;
    local_54[4] = param_1[0x28] * 0.32 * -0.5;
    local_40 = param_1[0x29] * 0.32 * -0.5;
    local_3c = param_1[0x2a] * 0.32 * -0.5;
    ExceptionList = &local_c;
    pfStack_64 = param_1;
    FUN_004042e0(&pfStack_64);
    FUN_005545a0();
    pfStack_64 = local_54 + 4;
    local_4 = 0;
    local_54[0] = 255.0;
    local_54[1] = 55.0;
    local_54[2] = 120.0;
    local_54[3] = 255.0;
    FUN_00554a30();
    pfStack_64 = local_54;
    FUN_00554890(param_1 + 1);
    local_4 = 0xffffffff;
    pfStack_64 = (float *)0x47e07d;
    FUN_00554630();
  }
  ExceptionList = local_c;
  return;
}

