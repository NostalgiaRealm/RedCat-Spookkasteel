/*
 * FUN_0054e490 at 0054e490
 * undefined FUN_0054e490(void)
 * Address ranges: 0054e490-0054e5e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0054e490(int param_1,float param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined1 local_111;
  int local_110;
  undefined4 local_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d9cb;
  local_c = ExceptionList;
  if (*(float *)(param_1 + 0x164) == 0.0) {
    ExceptionList = &local_c;
    fVar7 = (float10)FUN_005ad390(param_1 + 0x118,&local_111);
    *(float *)(param_1 + 0x164) = (float)fVar7;
  }
  else {
    fVar7 = (float10)*(float *)(param_1 + 0x164);
    ExceptionList = &local_c;
  }
  if (fVar7 != (float10)param_2) {
    puVar6 = local_10c;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    FUN_0060af1b(local_10c,0xff,&DAT_0069081c,(double)param_2);
    FUN_005acdb0();
    iVar4 = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      iVar5 = 0;
      local_110 = 0;
      local_4 = 0;
      while( true ) {
        if (*(int *)(param_1 + 0x58) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 2;
        }
        if (iVar2 <= iVar4) break;
        iVar2 = *(int *)(param_1 + 0x58);
        if (iVar5 == *(int *)(iVar2 + iVar4 * 4)) {
LAB_0054e58f:
          if (iVar5 != 0) {
            cVar1 = FUN_005530e0();
            if (cVar1 != '\0') {
              FUN_00553170();
            }
          }
        }
        else {
          if ((iVar5 != 0) &&
             (iVar3 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar3, iVar3 == 0)) {
            FUN_005abfc0();
          }
          iVar5 = *(int *)(iVar2 + iVar4 * 4);
          local_110 = iVar5;
          if (iVar5 != 0) {
            *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
            goto LAB_0054e58f;
          }
        }
        iVar4 = iVar4 + 1;
      }
      local_4 = 0xffffffff;
      if ((iVar5 != 0) &&
         (iVar4 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar4, iVar4 == 0)) {
        FUN_005abfc0();
      }
    }
  }
  ExceptionList = local_c;
  return;
}

