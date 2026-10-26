/*
 * FUN_00416130 at 00416130
 * undefined __register FUN_00416130(int param_1, int * param_2, uint param_3)
 * Address ranges: 00416130-00416156;0041617d-004161f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00416130(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint local_c;
  
  local_c = param_3;
  uVar1 = FUN_00417010(param_1,param_2,param_3);
  switch(uVar1 & 0x7f) {
  case 0:
    FUN_00403e04(param_2,(undefined4 *)&DAT_00416228);
    break;
  default:
    FUN_00415400();
    break;
  case 7:
    FUN_0041586c(param_1,&local_c,1);
    FUN_00403e98(param_2,(undefined4 *)0x0,local_c & 0xff);
    puVar2 = (undefined4 *)FUN_00404200(param_2);
    FUN_0041586c(param_1,puVar2,local_c & 0xff);
    break;
  case 8:
    FUN_00403e04(param_2,(undefined4 *)"False");
    break;
  case 9:
    FUN_00403e04(param_2,(undefined4 *)&DAT_0041620c);
    break;
  case 0xd:
    FUN_00403e04(param_2,(undefined4 *)&DAT_0041621c);
  }
  return;
}

