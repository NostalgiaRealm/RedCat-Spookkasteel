/*
 * Catch@004be734 at 004be734
 * undefined Catch@004be734(void)
 * Address ranges: 004be734-004be7b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * Catch_004be734(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  char *pcVar4;
  char *pcVar5;
  
  *(undefined1 *)(unaff_EBP + -0x38) = *(undefined1 *)(unaff_EBP + -0x13);
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = s_CAdamApplication__Start___caught_0069790c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = s_CAdamApplication__Start___caught_0069790c;
    pcVar5 = *(char **)(unaff_EBP + -0x34);
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
    FUN_00404190(uVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x247,unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  return &DAT_004be7b7;
}

