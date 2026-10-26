/*
 * FUN_0042fd40 at 0042fd40
 * undefined __register FUN_0042fd40(int * param_1)
 * Address ranges: 0042fd40-0042fd71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42fc6c slot 2 for TSiteList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42fc6c slot 2 for
   TSiteList. Original bytes unchanged; names and types still inferred. */

void FUN_0042fd40(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[2];
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_00412384(param_1,iVar3);
      FUN_00402800(iVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0041220c(param_1);
  return;
}

