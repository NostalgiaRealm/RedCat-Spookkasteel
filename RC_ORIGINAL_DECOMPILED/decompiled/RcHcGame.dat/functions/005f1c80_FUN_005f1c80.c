/*
 * FUN_005f1c80 at 005f1c80
 * undefined FUN_005f1c80(void)
 * Address ranges: 005f1c80-005f1d6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005f1c80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647b10;
  local_c = ExceptionList;
  uVar2 = 0xffffffff;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 3) = (undefined1)param_5;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  pcVar4 = s__none_006b1160;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = s__none_006b1160;
    pcVar5 = (char *)param_1[4];
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    param_1[5] = uVar2;
    *(undefined1 *)(param_1[4] + uVar2) = 0;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_00650a74;
  param_1[1] = 0x41;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  local_4 = 0;
  FUN_005ecfe0();
  *(undefined1 *)(param_1 + 0xf) = 0;
  local_4 = 1;
  *param_1 = &PTR_FUN_00650e6c;
  FUN_005ef350(param_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return param_1;
}

