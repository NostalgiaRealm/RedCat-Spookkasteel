/*
 * FUN_0046b180 at 0046b180
 * undefined __register FUN_0046b180(int * param_1, VARIANT * param_2)
 * Address ranges: 0046b180-0046b1b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463810 slot 23 for TLargeintField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463810 slot 23 for
   TLargeintField. Original bytes unchanged; names and types still inferred. */

void FUN_0046b180(int *param_1,VARIANT *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  cVar1 = (**(code **)(*param_1 + 0x7c))();
  if (cVar1 != '\0') {
    FUN_00404e28(param_2,(VARIANTARG *)PTR_DAT_00572068);
    return;
  }
  (param_2->n1).n2.vt = 0xe;
  uVar2 = FUN_0046b108(param_1,extraout_EDX,extraout_ECX);
  *(undefined4 *)((int)&param_2->n1 + 8) = uVar2;
  *(undefined4 *)((int)&param_2->n1 + 0xc) = extraout_EDX_00;
  return;
}

