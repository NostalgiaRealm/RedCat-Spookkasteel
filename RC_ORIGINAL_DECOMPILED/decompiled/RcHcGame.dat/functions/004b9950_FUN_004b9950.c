/*
 * FUN_004b9950 at 004b9950
 * undefined FUN_004b9950(void)
 * Address ranges: 004b9950-004b9a17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004b9950(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062f2f3;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*param_1 != 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_005c02b0();
    if (iVar2 == 0) {
      uVar3 = FUN_005ae390(local_1c,s_Could_not_destroy_backup_texture_00697340);
      local_4 = CONCAT31(local_4._1_3_,1);
      pcVar4 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_00697304,
                                    0x16,uVar3);
      (*pcVar4)();
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
        }
      }
    }
    *param_1 = 0;
  }
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  ExceptionList = pvStack_c;
  return;
}

