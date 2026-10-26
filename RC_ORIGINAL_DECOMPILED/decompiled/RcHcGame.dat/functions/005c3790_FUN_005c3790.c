/*
 * FUN_005c3790 at 005c3790
 * undefined FUN_005c3790(void)
 * Address ranges: 005c3790-005c387c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005c3790(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_4;
  
  local_4 = param_1;
  uVar1 = FUN_005c40f0();
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_005c3880(0,0,uVar1);
    return;
  }
  iVar2 = FUN_005c6b00();
  if (iVar2 == 0) {
    iVar2 = FUN_005c6a90();
    local_4 = (-(uint)(iVar2 != 0) & 0xfe) + 1;
    FUN_005c3880(1,local_4,uVar1);
    return;
  }
  iVar2 = FUN_005c6b00();
  if (iVar2 != 0) {
    local_4 = FUN_005c6a00(param_2);
    FUN_005c3880(1,local_4,uVar1);
    return;
  }
  iVar2 = FUN_005c6a90();
  if (iVar2 != 0) {
    FUN_005c5270(&local_4);
    local_4 = FUN_005c6a00(param_2);
    if (local_4 == 0) {
      local_4 = 1;
      FUN_005c3880(1,1,uVar1);
      return;
    }
  }
  FUN_005c3880(1,local_4,uVar1);
  return;
}

