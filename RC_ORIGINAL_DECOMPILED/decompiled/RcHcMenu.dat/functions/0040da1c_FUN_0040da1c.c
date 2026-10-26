/*
 * FUN_0040da1c at 0040da1c
 * PCNZCH __register FUN_0040da1c(undefined * param_1, undefined * param_2)
 * Address ranges: 0040da1c-0040da50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

PCNZCH FUN_0040da1c(undefined *param_1,undefined *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  PCNZCH pCVar3;
  PCNZCH pCVar4;
  
  pCVar4 = (PCNZCH)0x0;
  pcVar1 = FUN_004041f4(param_1);
  pbVar2 = FUN_004041f4(param_2);
  pCVar3 = FUN_0040db6c(pbVar2,pcVar1);
  if (pCVar3 != (PCNZCH)0x0) {
    pCVar4 = pCVar3 + (1 - (int)pbVar2);
  }
  return pCVar4;
}

