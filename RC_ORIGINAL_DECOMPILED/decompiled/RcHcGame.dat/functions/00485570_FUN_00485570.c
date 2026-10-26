/*
 * FUN_00485570 at 00485570
 * undefined FUN_00485570(void)
 * Address ranges: 00485570-0048564b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00485570(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00629a9f;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0xa4);
  local_4 = 3;
  ExceptionList = &local_c;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    ExceptionList = &local_c;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xa0);
  local_4._0_1_ = 2;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x80);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x74);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  local_4 = 0xffffffff;
  FUN_0051a260();
  ExceptionList = local_c;
  return;
}

