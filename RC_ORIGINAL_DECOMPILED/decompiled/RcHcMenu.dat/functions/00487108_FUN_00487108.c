/*
 * FUN_00487108 at 00487108
 * undefined __register FUN_00487108(undefined4 param_1, int * param_2, int param_3)
 * Address ranges: 00487108-0048715e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 22 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 22 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00487108(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0040320c(param_2,(int)&DAT_0047d2b0);
  if ((char)uVar1 == '\0') {
    FUN_00473fe8(param_1,(int)param_2,param_3);
  }
  else {
    if (param_3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_3 + 0xc);
    }
    iVar2 = FUN_004802c4((int)param_2,0);
    FUN_00466cb0((int *)&DAT_00461b04,'\x01',(undefined4 *)param_2[1],(int)param_2,iVar3,
                 (uint)*(ushort *)(iVar2 + 4),(undefined4 *)0x0);
  }
  return;
}

