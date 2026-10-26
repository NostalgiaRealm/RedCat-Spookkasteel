/*
 * FUN_004d0570 at 004d0570
 * undefined FUN_004d0570(void)
 * Address ranges: 004d0570-004d0628
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d0570(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631288;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == 0) {
    local_1c[0] = 0;
    uVar3 = 0xffffffff;
    pcVar4 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Model____0_00698cf4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006991d4,0xb4,local_1c);
    (*pcVar2)();
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  FUN_005b9950(param_1);
  ExceptionList = pvStack_c;
  return;
}

