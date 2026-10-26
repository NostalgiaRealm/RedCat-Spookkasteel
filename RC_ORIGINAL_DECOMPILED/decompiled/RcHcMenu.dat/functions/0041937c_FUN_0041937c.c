/*
 * FUN_0041937c at 0041937c
 * undefined __register FUN_0041937c(int param_1, int param_2, char * param_3, char * param_4)
 * Address ranges: 0041937c-004193f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041937c(int param_1,int param_2,char *param_3,char *param_4)

{
  undefined4 uVar1;
  int iVar2;
  char *local_10;
  undefined1 local_c;
  char *local_8;
  
  local_8 = param_3;
  if (param_2 != 0) {
    uVar1 = FUN_004097ac(param_3,param_4);
    if (((char)uVar1 == '\0') && (param_1 == *(int *)(param_2 + 4))) {
      iVar2 = FUN_00419414(param_1,param_4);
      if (iVar2 != 0) {
        local_10 = param_4;
        local_c = 0xb;
        uVar1 = FUN_0040cfe4((int)&DAT_00410664,'\x01',(undefined4 *)PTR_PTR_005723a4,0,&local_10);
        FUN_0040382c(uVar1);
      }
    }
  }
  if (((*(byte *)(param_1 + 0x20) & 0x10) != 0) && (*(int *)(param_1 + 4) != 0)) {
    (**(code **)(**(int **)(param_1 + 4) + 0x20))(*(int **)(param_1 + 4),param_2,local_8,param_4);
  }
  return;
}

