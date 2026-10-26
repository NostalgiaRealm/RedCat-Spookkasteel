/*
 * FUN_004174c0 at 004174c0
 * int __register FUN_004174c0(int param_1, char * param_2, int param_3)
 * Address ranges: 004174c0-0041752c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004174c0(int param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int local_c;
  
  local_c = param_3;
  local_c = FUN_004117a4(*(undefined4 **)(param_1 + 0x18),param_2);
  if (((local_c == 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18))) {
    local_c = FUN_004117a4(*(undefined4 **)(param_1 + 0x1c),param_2);
  }
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_1,param_2,&local_c);
  }
  if ((local_c != 0) &&
     (uVar1 = thunk_FUN_004032a4(local_c,(int)&PTR_FUN_00411384), (char)uVar1 != '\0')) {
    return local_c;
  }
  FUN_00411668(param_2);
  return local_c;
}

