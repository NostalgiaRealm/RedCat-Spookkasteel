/*
 * FUN_00550260 at 00550260
 * undefined FUN_00550260(void)
 * Address ranges: 00550260-00550322
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00550260(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063dd08;
  local_c = ExceptionList;
  iVar4 = 0;
  iVar5 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  do {
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 2;
    }
    if (iVar2 <= iVar4) {
      local_4 = 0xffffffff;
      if ((iVar5 != 0) &&
         (iVar4 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar4, iVar4 == 0)) {
        FUN_005abfc0(0);
      }
      ExceptionList = local_c;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar5 == *(int *)(iVar2 + iVar4 * 4)) {
LAB_005502cb:
      if (((iVar5 != 0) && (*(char *)(iVar5 + 0x39) != '\0')) && (*(char *)(iVar5 + 0x48) != '\0'))
      {
        cVar1 = FUN_005530e0();
        if (cVar1 != '\0') {
          FUN_00553170();
        }
      }
    }
    else {
      if ((iVar5 != 0) &&
         (iVar3 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar3, iVar3 == 0)) {
        FUN_005abfc0(0);
      }
      iVar5 = *(int *)(iVar2 + iVar4 * 4);
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        goto LAB_005502cb;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

