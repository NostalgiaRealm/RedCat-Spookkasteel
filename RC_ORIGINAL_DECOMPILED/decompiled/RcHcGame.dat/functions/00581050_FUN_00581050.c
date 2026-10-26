/*
 * FUN_00581050 at 00581050
 * undefined FUN_00581050(void)
 * Address ranges: 00581050-0058116b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00581050(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00642492;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064fc78;
  iVar3 = 0;
  local_4 = 3;
  if (0 < (int)param_1[0x5f]) {
    piVar4 = param_1 + 0x3f;
    do {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
      *piVar4 = 0;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < (int)param_1[0x5f]);
  }
  param_1[0x5f] = 0;
  iVar3 = param_1[0x68];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x14) + -1;
    *(int *)(iVar3 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x68] = 0;
  }
  iVar3 = param_1[0x65];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  iVar3 = param_1[0x61];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = pvStack_c;
  return;
}

