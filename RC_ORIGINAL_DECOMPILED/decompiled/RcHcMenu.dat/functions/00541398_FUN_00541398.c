/*
 * FUN_00541398 at 00541398
 * undefined __register FUN_00541398(int * param_1, int * param_2, int * param_3)
 * Address ranges: 00541398-005413f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x540328 slot 52 for TPopupAppObjGridBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x540328 slot 52 for
   TPopupAppObjGridBox. Original bytes unchanged; names and types still inferred. */

void FUN_00541398(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005411f8(param_1);
  if ((*(short *)(iVar1 + 0x272) == 0) || (param_2 == (int *)0x0)) {
    FUN_0053f5a0(param_1,param_2,param_3);
  }
  else {
    iVar1 = FUN_005411f8(param_1);
    uVar2 = FUN_00495ee0((int)param_2);
    (**(code **)(iVar1 + 0x270))(*(undefined4 *)(iVar1 + 0x274),uVar2,param_3);
  }
  return;
}

