/*
 * FUN_100072a0 at 100072a0
 * char * __cdecl FUN_100072a0(char * param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100072a0-1000733c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_100072a0(char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_4 != 1) {
    FUN_10005e40(7,s_D3D_Create2DTHandle__Invalid_num_10018b00);
    return (char *)0x0;
  }
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  param_1[0x10] = '\x01';
  cVar1 = FUN_10005bc0(param_2,param_3);
  param_1[0x11] = cVar1;
  *(int *)(param_1 + 0xc) = param_2;
  puVar2 = _malloc(0x10);
  *(undefined4 **)(param_1 + 0x14) = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_100074d0(param_1);
    return (char *)0x0;
  }
  iVar3 = FUN_10007720(*(int *)(param_1 + 0x14),param_2,param_3,&DAT_10028b00);
  if (iVar3 == 0) {
    FUN_100074d0(param_1);
    return (char *)0x0;
  }
  return param_1;
}

