/*
 * FUN_0040bf5c at 0040bf5c
 * undefined4 __register FUN_0040bf5c(undefined * param_1)
 * Address ranges: 0040bf5c-0040bfad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0040bf5c(undefined *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  PCNZCH pCVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 7;
  piVar4 = &DAT_005735c0;
  puVar5 = &DAT_005735dc;
  while( true ) {
    if (*piVar4 == 0) {
      return 0;
    }
    pcVar1 = FUN_004041f4(param_1);
    pbVar2 = FUN_004041f4((undefined *)*piVar4);
    pCVar3 = FUN_0040db6c(pbVar2,pcVar1);
    if (pCVar3 != (PCNZCH)0x0) break;
    puVar5 = puVar5 + 1;
    piVar4 = piVar4 + 1;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      return 0;
    }
  }
  return *puVar5;
}

