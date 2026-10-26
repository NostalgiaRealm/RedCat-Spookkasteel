/*
 * FUN_004c4880 at 004c4880
 * undefined FUN_004c4880(void)
 * Address ranges: 004c4880-004c4964
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004c4880(void)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630478;
  pvStack_c = ExceptionList;
  uVar3 = 0xffffffff;
  pcVar5 = s_CAdamApplication__DoCreateGame___0069876c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_CAdamApplication__DoCreateGame___0069876c;
    pcVar6 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    local_18[uVar3] = '\0';
    local_14 = uVar3;
  }
  local_4 = 0;
  pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s___AdamSource_AdamApplication_h_0068e58c,0x91,
                                local_1c);
  (*pcVar2)();
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = pvStack_c;
      return 0;
    }
    FUN_005fe5f0(local_18 + -1);
  }
  ExceptionList = pvStack_c;
  return 0;
}

