/*
 * FUN_00487a70 at 00487a70
 * undefined __register FUN_00487a70(int param_1, int * param_2)
 * Address ranges: 00487a70-00487acc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 15 for TDBDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 15 for
   TDBDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00487a70(int param_1,int *param_2)

{
  int *piVar1;
  
  FUN_00473f58();
  if (*(int *)(param_1 + 0x180) != 0) {
    piVar1 = FUN_00404c74(0x20,"\x0e\x10TPacketAttribute ");
    FUN_004121d8(param_2,(int)piVar1);
    FUN_00403e04(piVar1,(undefined4 *)&LAB_00487ad8);
    FUN_004053dc((VARIANTARG *)(piVar1 + 2),*(undefined4 *)(*(int *)(param_1 + 0x180) + 0x62));
    *(undefined1 *)(piVar1 + 6) = 0;
  }
  return;
}

