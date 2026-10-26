/*
 * FUN_00470434 at 00470434
 * undefined __register FUN_00470434(int param_1, int * param_2, VARIANTARG * param_3)
 * Address ranges: 00470434-004704ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00470434(int param_1,int *param_2,VARIANTARG *param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    if (((char)param_2[0xd] == '\x01') && ((char)param_2[0x34] != '\0')) {
      FUN_0046f9d0(param_1,0x17);
    }
    else if (((char)param_2[0xd] == '\x10') &&
            (iVar2 = (**(code **)(*param_2 + 0x80))(), 0xff < iVar2)) {
      FUN_0046f9d0(param_1,1);
    }
    else {
      FUN_0046f9d0(param_1,*(byte *)(param_2 + 0xd));
    }
    bVar1 = FUN_00405c2c((short *)param_3);
    if (bVar1) {
      FUN_00470514(param_1);
    }
    else {
      FUN_00470a54(param_1,param_3);
    }
    *(undefined1 *)(param_1 + 0x31) = 1;
    return;
  }
  return;
}

