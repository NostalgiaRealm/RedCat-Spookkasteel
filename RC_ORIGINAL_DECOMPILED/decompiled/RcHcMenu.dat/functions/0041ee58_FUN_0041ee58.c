/*
 * FUN_0041ee58 at 0041ee58
 * undefined __register FUN_0041ee58(int * param_1, int * param_2)
 * Address ranges: 0041ee58-0041ee8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41aa00 slot 0 for TPicture. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41aa00 slot 0 for TPicture.
   Original bytes unchanged; names and types still inferred. */

void FUN_0041ee58(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00402fdc(param_2);
  uVar2 = FUN_0040320c((int *)param_1[1],iVar1);
  if ((char)uVar2 != '\0') {
    (**(code **)(*param_2 + 8))(param_2,param_1[1]);
    return;
  }
  FUN_00412b58(param_1,param_2);
  return;
}

