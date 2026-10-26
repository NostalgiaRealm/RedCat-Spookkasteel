/*
 * FUN_004703d0 at 004703d0
 * undefined __register FUN_004703d0(int param_1, int param_2)
 * Address ranges: 004703d0-00470430
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004703d0(int param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    uVar1 = FUN_0046f9c0(param_2);
    *(undefined1 *)(param_1 + 0x30) = uVar1;
    uVar3 = FUN_0046f970(param_2);
    if ((char)uVar3 == '\0') {
      FUN_00470a54(param_1,(VARIANTARG *)(param_2 + 0x18));
    }
    else {
      FUN_00470514(param_1);
    }
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    FUN_00403e04((int *)(param_1 + 0x2c),*(undefined4 **)(param_2 + 0x2c));
    cVar2 = FUN_0046f99c(param_1);
    if (cVar2 == '\0') {
      uVar1 = FUN_0046f99c(param_2);
      FUN_0046f9ac(param_1,uVar1);
    }
  }
  return;
}

