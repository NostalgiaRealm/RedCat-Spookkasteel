/*
 * FUN_004cee60 at 004cee60
 * undefined FUN_004cee60(void)
 * Address ranges: 004cee60-004ceecd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004cee60(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00631088;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064ef44;
  iVar1 = param_1[0x62];
  local_4 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x62] = 0;
  }
  local_4 = 0xffffffff;
  FUN_004cfb70();
  ExceptionList = pvStack_c;
  return;
}

