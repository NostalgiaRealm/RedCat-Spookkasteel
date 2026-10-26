/*
 * FUN_0042b550 at 0042b550
 * undefined FUN_0042b550(void)
 * Address ranges: 0042b550-0042b61a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0042b550(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iStack_38;
  int local_34;
  float local_24 [4];
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00623198;
  local_c = ExceptionList;
  local_34 = (int)param_3;
  param_3 = &iStack_38;
  local_4 = 0;
  ExceptionList = &local_c;
  iStack_38 = param_1;
  FUN_00449760(&param_2);
  FUN_00423740();
  if (param_2 != 0) {
    param_3 = &local_34;
    local_34 = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
    iStack_38 = 0x42b5b3;
    iVar1 = FUN_004142f0();
    if (iVar1 != 0) {
      pfVar3 = (float *)(iVar1 + 0x11c);
      pfVar4 = local_24;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar4 + 1;
      }
      *(float *)(param_1 + 0x22c) = (local_14 - local_24[1]) * 0.5;
    }
    local_4 = 0xffffffff;
    if ((param_2 != 0) &&
       (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
      local_34 = 0;
      iStack_38 = 0x42b607;
      FUN_005abfc0();
    }
  }
  ExceptionList = local_c;
  return;
}

