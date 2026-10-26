/*
 * FUN_00482a0c at 00482a0c
 * int __register FUN_00482a0c(void)
 * Address ranges: 00482a0c-00482b28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00482a0c(void)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar4;
  int in_stack_00000004;
  int iVar5;
  int local_8;
  
  piVar4 = (int *)0x0;
  local_8 = 0;
  if (*(char *)(in_stack_00000004 + 0xc) != '\0') {
    iVar5 = in_stack_00000004;
    pcVar1 = FUN_004041f4(*(undefined **)(in_stack_00000004 + -8));
    piVar4 = FUN_00482928(pcVar1,extraout_EDX,extraout_ECX,iVar5);
    local_8 = piVar4[1];
  }
  if (local_8 == 0) {
    uVar2 = thunk_FUN_00479a47(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x70));
    FUN_0047fe48(uVar2);
    if (*(int *)(in_stack_00000004 + 8) != 0) {
      uVar2 = thunk_FUN_00478ffa(0);
      FUN_0047fe48(uVar2);
    }
    if (*(char *)(*(int *)(in_stack_00000004 + -4) + 0x66) == '\0') {
      FUN_0047fc9c(0,0x60026,0);
      FUN_0047fc9c(0,0x60042,0xffffffff);
    }
    else {
      FUN_0047fc9c(0,0x60010,0xffffffff);
    }
    while( true ) {
      FUN_004041f4(*(undefined **)(in_stack_00000004 + -8));
      uVar2 = thunk_FUN_00479a65(0);
      if ((short)uVar2 == 0) break;
      if ((short)uVar2 == 0x2902) {
        uVar3 = FUN_0048135c(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x78),extraout_EDX_00,
                             extraout_ECX_00);
        if ((char)uVar3 == '\0') {
          FUN_0047fe30(uVar2);
        }
      }
      else {
        FUN_0047fe30(uVar2);
      }
    }
    if (piVar4 != (int *)0x0) {
      FUN_00403e04(piVar4 + 2,*(undefined4 **)(in_stack_00000004 + -8));
      piVar4[1] = 0;
    }
  }
  return local_8;
}

