/*
 * FUN_00431c54 at 00431c54
 * undefined __register FUN_00431c54(int * param_1, int * param_2)
 * Address ranges: 00431c54-00431ce4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431c54(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar3;
  
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 8;
  piVar1 = (int *)param_2[0xb];
  uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_0042ebec);
  uVar3 = extraout_ECX;
  if ((char)uVar2 != '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,piVar1);
    uVar3 = extraout_ECX_00;
  }
  FUN_0041936c(param_1,param_2,uVar3);
  *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfff7;
  if (param_1[9] != 0) {
    FUN_00433700((int)param_1,0xb009,0,0);
    FUN_00433700((int)param_1,0xb008,0,0);
    FUN_00433700((int)param_1,0xb023,0,0);
    FUN_00433700((int)param_1,0xb035,0,0);
    FUN_00433700((int)param_1,0xb03d,0,0);
  }
  return;
}

