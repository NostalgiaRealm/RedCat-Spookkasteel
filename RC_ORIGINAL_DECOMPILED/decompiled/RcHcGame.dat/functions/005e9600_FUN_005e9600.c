/*
 * FUN_005e9600 at 005e9600
 * undefined FUN_005e9600(void)
 * Address ranges: 005e9600-005e9712
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005e9600(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00646c86;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650a44;
  iVar2 = param_1[0x19];
  local_4 = 1;
  if (iVar2 != param_1[0x18]) {
    do {
      (**(code **)(**(int **)(iVar2 + -4) + 0x5c))(param_1 + 0x2f);
      iVar2 = iVar2 + -4;
    } while (iVar2 != param_1[0x18]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_005ec360();
  *param_1 = &PTR_FUN_00650aa4;
  local_4 = 8;
  FUN_005ed250();
  local_4._0_1_ = 7;
  FUN_005ed250();
  local_4._0_1_ = 6;
  FUN_005ed250();
  local_4._0_1_ = 5;
  FUN_005ed250();
  local_4._0_1_ = 4;
  FUN_005ed250();
  local_4._0_1_ = 3;
  FUN_005ed250();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_005ed250();
  *param_1 = &PTR_FUN_00650a74;
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  ExceptionList = pvStack_c;
  return;
}

