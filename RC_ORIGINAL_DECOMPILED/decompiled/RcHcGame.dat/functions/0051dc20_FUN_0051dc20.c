/*
 * FUN_0051dc20 at 0051dc20
 * undefined FUN_0051dc20(void)
 * Address ranges: 0051dc20-0051dcf1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051dc20(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638b48;
  local_c = ExceptionList;
  uVar2 = 0xffffffff;
  pcVar4 = s_GrobberPathPoint_0069f684;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = s_GrobberPathPoint_0069f684;
    pcVar5 = local_18;
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
    local_18[uVar2] = '\0';
    local_14 = uVar2;
  }
  local_4 = 0;
  FUN_005671a0(local_1c);
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

