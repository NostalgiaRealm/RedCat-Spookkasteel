/*
 * Catch@005050ff at 005050ff
 * undefined Catch@005050ff(void)
 * Address ranges: 005050ff-00505190
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * Catch_005050ff(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  char *pcVar4;
  char *pcVar5;
  
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = s_invalid_eventname_0069e06c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = s_invalid_eventname_0069e06c;
    pcVar5 = *(char **)(unaff_EBP + -0x28);
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
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00505280(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_004040a0(1);
  return &LAB_00505191;
}

