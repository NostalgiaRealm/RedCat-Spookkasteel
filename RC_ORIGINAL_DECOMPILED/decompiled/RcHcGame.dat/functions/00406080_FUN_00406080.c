/*
 * FUN_00406080 at 00406080
 * undefined FUN_00406080(void)
 * Address ranges: 00406080-00406130
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00406080(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00620000;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064a6c0;
  iVar3 = 0;
  local_4 = 0;
  local_10 = param_1;
  cVar1 = FUN_00429970();
  if ((cVar1 != '\0') && (param_1[0xb] != 0)) {
    iVar2 = FUN_00598540();
    if (0 < iVar2) {
      do {
        FUN_00598310(&local_14,iVar3);
        local_4 = CONCAT31(local_4._1_3_,1);
        iVar2 = FUN_0059b1e0();
        if (iVar2 != -1) {
          FUN_00598dd0(local_14);
        }
        local_4 = local_4 & 0xffffff00;
        FUN_005630e0();
        iVar3 = iVar3 + 1;
        iVar2 = FUN_00598540();
      } while (iVar3 < iVar2);
    }
  }
  local_4 = 0xffffffff;
  FUN_004029b0();
  ExceptionList = local_c;
  return;
}

