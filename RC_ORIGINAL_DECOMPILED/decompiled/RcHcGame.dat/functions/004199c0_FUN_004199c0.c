/*
 * FUN_004199c0 at 004199c0
 * undefined FUN_004199c0(void)
 * Address ranges: 004199c0-00419a79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b630 slot 49 for .?AVCRcBoneBrutus@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b630 slot 49 for
   .?AVCRcBoneBrutus@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004199c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int aiStack_38 [3];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined1 local_10 [16];
  
  uStack_18 = 0;
  aiStack_38[0] = param_1;
  if (*(int *)(param_1 + 0x1e8) == 0) {
    local_24 = *param_3;
    local_20 = param_3[1];
    local_1c = param_3[2];
    aiStack_38[1] = 1;
    aiStack_38[2] = *param_2;
    local_2c = param_2[1];
    local_28 = param_2[2];
    FUN_004042e0(aiStack_38);
    FUN_0044d180(local_10);
    return;
  }
  local_24 = *param_3;
  local_20 = param_3[1];
  local_1c = param_3[2];
  aiStack_38[1] = 10;
  aiStack_38[2] = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  FUN_004042e0(aiStack_38);
  FUN_0044d180(local_10);
  return;
}

