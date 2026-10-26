/*
 * FUN_004754a4 at 004754a4
 * undefined __register FUN_004754a4(undefined * param_1, int * param_2)
 * Address ranges: 004754a4-0047555a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004754a4(undefined *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_c;
  undefined *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  puStack_1c = &LAB_0047555b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00403db0(param_2);
  local_8 = FUN_004041f4(param_1);
  cVar4 = '\0';
  do {
    piVar3 = FUN_00403db0((int *)&local_c);
    cVar1 = FUN_00475158((int *)&local_8,piVar3,cVar4);
    if ((byte)(cVar1 - 5U) < 9) {
      cVar4 = cVar1;
    }
  } while ((cVar1 != '\x06') && (cVar1 != '\x0e'));
  if (cVar1 == '\x06') {
    while( true ) {
      piVar3 = FUN_00403db0((int *)&local_c);
      cVar2 = FUN_00475158((int *)&local_8,piVar3,cVar4);
      cVar1 = cVar2;
      if ((8 < (byte)(cVar2 - 5U)) && (cVar1 = cVar4, cVar2 == '\x01')) break;
      cVar4 = cVar1;
      if (((cVar4 != '\x06') || (cVar2 == '\x01')) || (cVar2 == '\x0e')) goto LAB_00475545;
    }
    FUN_00403e04(param_2,local_c);
  }
LAB_00475545:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00475562;
  puStack_1c = (undefined1 *)0x47555a;
  FUN_00403db0((int *)&local_c);
  return;
}

