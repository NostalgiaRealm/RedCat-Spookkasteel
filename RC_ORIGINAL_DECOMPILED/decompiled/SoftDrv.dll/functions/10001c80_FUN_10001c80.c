/*
 * FUN_10001c80 at 10001c80
 * undefined FUN_10001c80(void)
 * Address ranges: 10001c80-10001d4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001c80(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 auStack_450 [2];
  undefined1 *puStack_448;
  int local_428 [125];
  char acStack_234 [556];
  char *pcStack_8;
  uint uStack_4;
  
  iVar2 = FUN_10001700();
  if (iVar2 == 0) {
    return 0;
  }
  piVar5 = local_428;
  for (iVar2 = 0x10a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  iVar2 = (**(code **)(iRam00000000 + 0x6c))();
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
    pcVar4 = acStack_234;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 + 0x17 < uStack_4) {
      pcVar4 = s_Software__Full_Screen__10021078;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pcStack_8 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcStack_8 = pcStack_8 + 4;
      }
      puStack_448 = &LAB_10001d50;
      *pcStack_8 = *pcVar4;
      auStack_450[0] = 0;
      (**(code **)(local_428[0] + 0x20))(local_428,0);
      FUN_10001350(auStack_450);
      return 1;
    }
  }
  puStack_448 = (undefined1 *)0x10001cf8;
  FUN_10001350();
  return 0;
}

