/*
 * FUN_0049b884 at 0049b884
 * undefined __register FUN_0049b884(int * param_1, int * param_2, int param_3, undefined * param_4)
 * Address ranges: 0049b884-0049b955;0049b96d-0049b987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049b884(int *param_1,int *param_2,int param_3,undefined *param_4)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  piVar1 = param_2;
  if ((((((int *)param_1[0x23] != param_2) || (param_1[0x10] != param_3)) ||
       ((undefined *)param_1[0xf] != param_4)) ||
      ((piVar1 = param_1, param_1[0x12] != param_1[0x125] || (param_1[0x13] != param_1[0x126])))) ||
     (param_1[0x14] != param_1[0x127])) {
    if (((int)param_2 < 1) || (param_3 < 1)) {
      puStack_24 = (undefined1 *)0x49b905;
      FUN_0049aa40(param_1,piVar1,param_3);
    }
    else {
      puStack_24 = (undefined1 *)0x49b913;
      piVar1 = FUN_004990a4((int *)&PTR_FUN_004988dc,'\x01',param_3);
      puStack_28 = &LAB_0049b956;
      uStack_2c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_2c;
      uVar2 = 0;
      puStack_24 = &stack0xfffffffc;
      FUN_00499160(piVar1,(int)param_2,param_3,'\0','\x01',param_1 + 0x25,param_1 + 0x125,param_4);
      *in_FS_OFFSET = uVar2;
      FUN_0049b6c0((int)param_1,(int)piVar1);
      *(undefined1 *)((int)param_1 + 0x1a) = 1;
    }
  }
  return;
}

