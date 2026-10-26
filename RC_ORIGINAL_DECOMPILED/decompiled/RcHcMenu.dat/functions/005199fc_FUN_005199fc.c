/*
 * FUN_005199fc at 005199fc
 * int * __register FUN_005199fc(int * param_1, WPARAM param_2)
 * Address ranges: 005199fc-00519a54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005199fc(int *param_1,WPARAM param_2)

{
  int *piVar1;
  undefined4 uVar2;
  WPARAM local_10;
  undefined1 local_c;
  
  piVar1 = (int *)FUN_0042c604(param_1,param_2);
  if (piVar1 == (int *)0xffffffff) {
    local_c = 0;
    local_10 = param_2;
    uVar2 = FUN_0040cfe4((int)&DAT_00410554,'\x01',(undefined4 *)PTR_PTR_005724ac,0,&local_10);
    FUN_0040382c(uVar2);
  }
  if (piVar1 != (int *)0x0) {
    uVar2 = FUN_0040320c(piVar1,(int)&DAT_005190f4);
    if ((char)uVar2 == '\0') {
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}

