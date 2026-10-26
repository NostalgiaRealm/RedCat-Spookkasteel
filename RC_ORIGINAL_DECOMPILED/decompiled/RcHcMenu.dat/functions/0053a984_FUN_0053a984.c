/*
 * FUN_0053a984 at 0053a984
 * undefined __register FUN_0053a984(int * param_1, int * param_2, int * param_3, undefined1 param_4, LONG * param_5)
 * Address ranges: 0053a984-0053aa06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x537000 slot 50 for TOAGrid2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x537000 slot 50 for
   TOAGrid2. Original bytes unchanged; names and types still inferred. */

void FUN_0053a984(int *param_1,int *param_2,int *param_3,undefined1 param_4,LONG *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (((char)param_1[0xb6] == '\x01') || ((char)param_1[0xb6] == '\x02')) {
    iVar1 = FUN_00538860(param_1);
    iVar1 = FUN_00523748(iVar1);
    if (iVar1 == param_3[1]) {
      iVar1 = FUN_00538860(param_1);
      if (*(int **)(iVar1 + 0x1f0) == param_2) {
        piVar2 = (int *)FUN_00538b6c(param_1);
        FUN_00493768((int *)param_1[0xa0],piVar2);
      }
    }
  }
  FUN_00529328(param_1,param_2,param_3,param_4,param_5);
  return;
}

