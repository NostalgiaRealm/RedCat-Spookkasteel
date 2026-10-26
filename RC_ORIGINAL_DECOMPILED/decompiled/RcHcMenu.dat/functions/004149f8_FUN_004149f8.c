/*
 * FUN_004149f8 at 004149f8
 * int * __register FUN_004149f8(int * param_1, char param_2, undefined * param_3, ushort param_4)
 * Address ranges: 004149f8-00414aac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004149f8(int *param_1,char param_2,undefined *param_3,ushort param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *extraout_ECX;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined *local_10;
  undefined1 local_c;
  char local_5;
  
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  if (param_4 == 0xffff) {
    iVar1 = FUN_00409cd8(param_3);
    param_1[1] = iVar1;
    if (iVar1 < 0) {
      local_c = 0xb;
      local_10 = param_3;
      uVar2 = FUN_0040cfe4((int)&DAT_004102e0,'\x01',(undefined4 *)PTR_PTR_005724bc,0,&local_10);
      FUN_0040382c(uVar2);
    }
  }
  else {
    iVar1 = FUN_00409c98(param_3,(uint)param_4);
    param_1[1] = iVar1;
    if (param_1[1] < 0) {
      local_c = 0xb;
      local_10 = param_3;
      uVar2 = FUN_0040cfe4((int)&DAT_0041033c,'\x01',(undefined4 *)PTR_PTR_005724e4,0,&local_10);
      FUN_0040382c(uVar2);
    }
  }
  if (local_5 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffd4;
  }
  return param_1;
}

