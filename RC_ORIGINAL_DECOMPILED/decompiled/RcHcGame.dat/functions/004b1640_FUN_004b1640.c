/*
 * FUN_004b1640 at 004b1640
 * undefined FUN_004b1640(void)
 * Address ranges: 004b1640-004b184f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_004b1640(undefined4 param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float local_14;
  float local_c;
  
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  iVar5 = FUN_004b27a0();
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  iVar6 = FUN_004b26a0();
  local_c = param_4;
  local_14 = param_4 * 480.0 * 0.0015625;
  if (local_14 < 1.0 / (float)iVar6) {
    local_14 = 1.0 / (float)iVar6;
  }
  if (param_4 < 1.0 / (float)iVar5) {
    local_c = 1.0 / (float)iVar5;
  }
  cVar3 = FUN_004b1150(param_1,local_14 + param_2,local_c + param_3,param_9,param_10,param_11,
                       param_12);
  cVar4 = FUN_004b1150(param_1,param_2 - local_14,local_c + param_3,param_9,param_10,param_11,
                       param_12);
  if ((cVar4 == '\0') || (bVar1 = true, cVar3 == '\0')) {
    bVar1 = false;
  }
  cVar3 = FUN_004b1150(param_1,param_2 - local_14,param_3 - local_c,param_9,param_10,param_11,
                       param_12);
  if ((cVar3 == '\0') || (bVar2 = true, !bVar1)) {
    bVar2 = false;
  }
  cVar3 = FUN_004b1150(param_1,local_14 + param_2,param_3 - local_c,param_9,param_10,param_11,
                       param_12);
  if ((cVar3 == '\0') || (!bVar2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar3 = FUN_004b1150(param_1,param_2,param_3,param_5,param_6,param_7,param_8);
  if ((cVar3 != '\0') && (bVar1)) {
    return 1;
  }
  return 0;
}

