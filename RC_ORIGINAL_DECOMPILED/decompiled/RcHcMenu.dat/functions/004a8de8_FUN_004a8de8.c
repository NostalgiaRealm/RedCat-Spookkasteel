/*
 * FUN_004a8de8 at 004a8de8
 * undefined1 __register FUN_004a8de8(int * param_1, int param_2)
 * Address ranges: 004a8de8-004a8e61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_004a8de8(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  byte local_e;
  undefined1 local_d;
  int local_c;
  int *local_8;
  
  local_d = 1;
  local_c = param_2;
  local_8 = param_1;
  piVar2 = FUN_0044879c(param_1);
  if (((piVar2 != (int *)0x0) && (*(char *)((int)piVar2 + 0x215) != '\0')) &&
     (cVar1 = FUN_00437634(piVar2,local_c), cVar1 != '\0')) {
    return local_d;
  }
  if ((*(byte *)((int)local_8 + 0x41) & 0x10) == 0) {
    local_e = (byte)*(undefined2 *)(local_c + 4);
    (**(code **)(*local_8 + 0x9c))(local_8,&local_e);
    *(ushort *)(local_c + 4) = (ushort)local_e;
    if (local_e == 0) {
      return local_d;
    }
  }
  return 0;
}

