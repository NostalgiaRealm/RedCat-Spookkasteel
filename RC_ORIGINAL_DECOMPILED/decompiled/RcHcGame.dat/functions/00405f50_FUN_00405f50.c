/*
 * FUN_00405f50 at 00405f50
 * undefined FUN_00405f50(void)
 * Address ranges: 00405f50-0040603b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a6b0 slot 1 for .?AVCRcDropDeadState@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a6b0 slot 1 for
   .?AVCRcDropDeadState@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00405f50(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)(param_1 + 0x40);
  local_10 = *(int *)(param_1 + 0x30);
  bVar2 = true;
  local_4 = *(undefined4 *)(param_1 + 0x48);
  if (local_10 != -1) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
      *(int *)(param_1 + 0x34) = local_10 + param_3;
    }
    else if (iVar1 < param_3) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      bVar2 = false;
    }
    else if (local_10 < 1) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      *(float *)(param_1 + 0x38) = (float)(iVar1 - param_3) / (float)local_10;
    }
  }
  *(bool *)(param_1 + 0x3c) = bVar2;
  if (bVar2) {
    local_8 = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x38) +
              (1.0 - *(float *)(param_1 + 0x38)) * *(float *)(param_1 + 0x2c);
    (**(code **)(**(int **)(param_1 + 0x28) + 0xac))(*(float *)(param_1 + 0x38) * 255.0);
  }
  else {
    local_8 = *(float *)(param_1 + 0x2c);
    (**(code **)(**(int **)(param_1 + 0x28) + 0xac))(0);
    (**(code **)(**(int **)(param_1 + 0x28) + 0xb0))();
    FUN_00402d00();
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 0x4c))(&local_10);
  return;
}

