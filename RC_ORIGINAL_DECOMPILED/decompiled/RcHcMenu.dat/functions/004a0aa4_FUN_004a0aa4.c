/*
 * FUN_004a0aa4 at 004a0aa4
 * undefined __register FUN_004a0aa4(int * param_1)
 * Address ranges: 004a0aa4-004a0b63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a0aa4(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    param_1[0xb] = 0;
    param_1[0xe] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined1 *)(param_1 + 0xd) = 0;
    if ((param_1[0x12] == 0) && (*(int *)(param_1[10] + 8) != 0)) {
      piVar2 = FUN_0049c9d8((int *)&PTR_FUN_0049c868,'\x01',(int *)0x0);
      param_1[0x12] = (int)piVar2;
      FUN_0049cb7c(param_1[0x12],param_1,extraout_ECX_00,*(undefined4 *)(*param_1 + 0x8c),param_1);
      FUN_0049cb50(param_1[0x12],(int)(1000 / (ulonglong)*(uint *)(param_1[10] + 8)),
                   *(uint *)(param_1[10] + 8));
    }
    else {
      FUN_0049cb24(param_1[0x12],'\x01',extraout_ECX);
    }
    (**(code **)(*param_1 + 0x68))(param_1,param_1);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

