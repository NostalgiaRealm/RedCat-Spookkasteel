/*
 * FUN_004e2720 at 004e2720
 * undefined FUN_004e2720(void)
 * Address ranges: 004e2720-004e27aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004e2720(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063287b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e2710();
  if (*(int *)(param_1 + 0x144) != 0) {
    pvVar1 = operator_new(100);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004ade30(0,param_1 + 0x5c,*(undefined4 *)(param_1 + 0x144));
    }
    local_4 = 0xffffffff;
    FUN_004ad2e0(uVar2);
    FUN_004ad9a0(100,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}

