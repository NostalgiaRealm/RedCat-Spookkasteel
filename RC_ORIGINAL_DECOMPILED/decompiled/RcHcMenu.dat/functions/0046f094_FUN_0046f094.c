/*
 * FUN_0046f094 at 0046f094
 * undefined __register FUN_0046f094(int param_1)
 * Address ranges: 0046f094-0046f0cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4663b4 slot 4 for TParams. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4663b4 slot 4 for TParams.
   Original bytes unchanged; names and types still inferred. */

void FUN_0046f094(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0041300c(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_0046f0d0(param_1,iVar3);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00413394();
  return;
}

