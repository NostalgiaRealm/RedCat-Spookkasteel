/*
 * FUN_0048493c at 0048493c
 * bool __register FUN_0048493c(int * param_1, int * param_2)
 * Address ranges: 0048493c-00484959;00484986-00484a33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0048493c(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  switch(*(undefined1 *)((int)param_1 + 0x8d)) {
  default:
    *param_2 = 0;
    break;
  case 1:
    bVar1 = FUN_004731cc((int)param_1);
    if (bVar1) {
      *param_2 = 0;
    }
    else {
      iVar2 = FUN_004730d8((int)param_1);
      *param_2 = iVar2;
    }
    break;
  case 2:
  case 3:
    iVar2 = FUN_004730d8((int)param_1);
    *param_2 = iVar2;
    break;
  case 4:
    *param_2 = param_1[0x76] + 6;
    break;
  case 5:
    *param_2 = param_1[0x15];
    break;
  case 6:
    *param_2 = param_1[99];
    break;
  case 7:
    if (*(char *)((int)param_1 + 0x1b3) == '\0') {
      iVar2 = FUN_004730d8((int)param_1);
      *param_2 = iVar2;
    }
    else {
      *param_2 = *(int *)(param_1[0x6e] + 8);
    }
    break;
  case 8:
    if (*(char *)((int)param_1 + 0x1b3) == '\0') {
      bVar1 = FUN_00484778(param_1);
      *param_2 = CONCAT31(extraout_var,bVar1);
    }
    else {
      *param_2 = *(int *)(param_1[0x6e] + 0xc);
    }
    break;
  case 10:
    *param_2 = (uint)*(ushort *)(param_1 + 0x7a) * param_1[0x7e] + param_1[0x82];
  }
  return *param_2 != 0;
}

