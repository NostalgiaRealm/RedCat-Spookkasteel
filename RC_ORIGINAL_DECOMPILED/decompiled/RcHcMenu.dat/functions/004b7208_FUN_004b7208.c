/*
 * FUN_004b7208 at 004b7208
 * undefined __register FUN_004b7208(int * param_1, char param_2, undefined4 * param_3)
 * Address ranges: 004b7208-004b72a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4b6574 slot 2 for DAOBase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4b6574 slot 2 for DAOBase.
   Original bytes unchanged; names and types still inferred. */

void FUN_004b7208(int *param_1,char param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  int *piVar2;
  undefined4 *extraout_ECX;
  int iVar3;
  undefined4 extraout_ECX_00;
  VARIANT *pVVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uStackY_3c;
  undefined1 *puStackY_38;
  undefined1 *puStackY_34;
  undefined4 in_stack_ffffffd0;
  undefined4 in_stack_ffffffd4;
  VARIANT local_14;
  
  bVar5 = 0;
  if (param_2 != '\0') {
    puStackY_34 = (undefined1 *)0x4b721d;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffd0,in_stack_ffffffd4);
    param_3 = extraout_ECX;
  }
  pVVar4 = &local_14;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)&pVVar4->n1 = *param_3;
    param_3 = param_3 + (uint)bVar5 * -2 + 1;
    pVVar4 = (VARIANT *)((int)pVVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  puStackY_34 = (undefined1 *)0x4b7235;
  FUN_00405bd4(&local_14);
  puStackY_38 = &LAB_004b72a1;
  uStackY_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_3c;
  puStackY_34 = &stack0xfffffffc;
  FUN_00403064(param_1,'\0',extraout_ECX_00);
  uVar1 = FUN_00405bf8((undefined2 *)&local_14);
  if (CONCAT22(extraout_var,uVar1) == 9) {
    FUN_004b6e60();
    FUN_00406ab8(param_1 + 3,(int *)local_14.n1._8_4_);
    FUN_004b6e4c();
    param_1[1] = 0;
  }
  else {
    piVar2 = FUN_0040ceec((int *)&DAT_004b6518,'\x01',
                          (undefined4 *)"Automation object is not of type varDispatch");
    FUN_0040382c(piVar2);
  }
  *in_FS_OFFSET = uStackY_3c;
  puStackY_34 = &LAB_004b72a8;
  puStackY_38 = (undefined1 *)0x4b72a0;
  FUN_00405bcc(&local_14);
  return;
}

