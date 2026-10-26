/*
 * FUN_00495bac at 00495bac
 * byte __register FUN_00495bac(int param_1)
 * Address ranges: 00495bac-00495bcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_00495bac(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00405c08((short *)(param_1 + 0x20));
  return (byte)uVar1 ^ 1;
}

