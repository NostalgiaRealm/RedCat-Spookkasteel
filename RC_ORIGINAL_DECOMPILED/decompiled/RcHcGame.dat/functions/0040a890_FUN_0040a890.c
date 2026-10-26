/*
 * FUN_0040a890 at 0040a890
 * undefined FUN_0040a890(void)
 * Address ranges: 0040a890-0040a929
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0040a890(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006208a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00422da0();
  if (*(int *)(iVar1 + 100) < 1) {
    pvVar2 = operator_new(0x38);
    local_4 = 1;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00403840(*(undefined4 *)(param_1 + 0x2c));
      goto LAB_0040a908;
    }
  }
  else {
    pvVar2 = operator_new(0x28);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00403bb0(*(undefined4 *)(param_1 + 0x2c));
      goto LAB_0040a908;
    }
  }
  uVar3 = 0;
LAB_0040a908:
  local_4 = 0xffffffff;
  FUN_00402a10(5,uVar3);
  ExceptionList = local_c;
  return;
}

